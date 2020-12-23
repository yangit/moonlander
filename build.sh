#!/bin/bash
set -xe
rm -rf oryx
curl 'https://oryx.ergodox-ez.com/graphql' \
    -H 'content-type: application/json' -H 'origin: https://configure.ergodox-ez.com' \
    --data-binary $'{"operationName":"getLayout","variables":{"hashId":"rOb5l","geometry":"moonlander","revisionId":"latest"},"query":"query getLayout($hashId: String\u0021, $revisionId: String\u0021, $geometry: String) {\\n  Layout(hashId: $hashId, geometry: $geometry, revisionId: $revisionId) {\\n    ...LayoutData\\n    __typename\\n  }\\n}\\n\\nfragment LayoutData on Layout {\\n  privacy\\n  geometry\\n  hashId\\n  parent {\\n    hashId\\n    __typename\\n  }\\n  tags {\\n    id\\n    hashId\\n    name\\n    __typename\\n  }\\n  title\\n  user {\\n    annotationPublic\\n    name\\n    hashId\\n    pictureUrl\\n    __typename\\n  }\\n  revision {\\n    ...RevisionData\\n    __typename\\n  }\\n  __typename\\n}\\n\\nfragment RevisionData on Revision {\\n  aboutIntro\\n  aboutOutro\\n  createdAt\\n  hashId\\n  hexUrl\\n  model\\n  title\\n  config\\n  swatch\\n  zipUrl\\n  qmkVersion\\n  qmkUptodate\\n  layers {\\n    builtIn\\n    hashId\\n    keys\\n    position\\n    title\\n    color\\n    __typename\\n  }\\n  __typename\\n}\\n"}' \
    --compressed | jq -r '.data.Layout.revision.zipUrl' > url.txt
wget -O oryx.zip $(cat url.txt)
rm url.txt
unzip oryx.zip -d oryx
rm oryx.zip
ORYX_DIR=oryx/moonlander_yan-s-workman_source
ls $ORYX_DIR
mkdir -p $ORYX_DIR/out

# rules.mk
cat $ORYX_DIR/rules.mk | sed 's/CONSOLE_ENABLE = no/CONSOLE_ENABLE = yes/' > $ORYX_DIR/out/rules.mk

# config.h
cp $ORYX_DIR/config.h $ORYX_DIR/out/config.h

# keymap.c
cat $ORYX_DIR/keymap.c | sed -n '/#define KC_MAC_UNDO LGUI(KC_Z)/,$p' | sed '/process_record_user/,$d' > $ORYX_DIR/out/keymap_bare.c
cat header.c $ORYX_DIR/out/keymap_bare.c footer.c > $ORYX_DIR/out/keymap.c
rm $ORYX_DIR/out/keymap_bare.c


# rm -rf ../qmk_firmware/keyboards/moonlander/keymaps/yan
mkdir -p ../qmk_firmware/keyboards/moonlander/keymaps/yan
# cp $ORYX_DIR/out/* ../qmk_firmware/keyboards/moonlander/keymaps/yan
cp $ORYX_DIR/out/keymap.c ../qmk_firmware/keyboards/moonlander/keymaps/yan
cp $ORYX_DIR/out/rules.mk ../qmk_firmware/keyboards/moonlander/keymaps/yan
cd ../qmk_firmware
time ./util/docker_build.sh moonlander:yan
cd ../yan
open /Applications/Wally.app