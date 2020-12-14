# Readme

```bash
git clone --recurse-submodules https://github.com/zsa/qmk_firmware.git

rm -rf qmk_firmware/keyboards/moonlander/keymaps/yan
cp -R yan qmk_firmware/keyboards/moonlander/keymaps
cd qmk_firmware
./util/docker_build.sh moonlander:yan
cd ..
```
