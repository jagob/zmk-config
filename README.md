# Setup local build environment

west init -l app/\
yay -S python-west
pip3 install --user -r zephyr/scripts/requirements-base.txt\

west build -s app -b nice_nano -- -DSHIELD=kyria_left -DZMK_CONFIG ~/code/zmk-config/config/
west build -s . -b nice_nano -- -DSHIELD=kyria_left -DZMK_CONFIG ~/code/zmk-config/config/
west build -b nice_nano -- -DSHIELD=kyria_left -DZMK_CONFIG ~/code/zmk-config/config/

git clone https://github.com/ftc/zmk.git zmk_mouse
conda activate py38
west init -l app/
west update
pip install --user -r zephyr/scripts/requirements-base.txt


# Build

conda activate py38
cd ~/code/zmk_mouse/app
west build --pristine -d build/left -b nice_nano_v2 -- -DSHIELD=kyria_rev2_left -DZMK_CONFIG=/home/jacob/code/zmk-config/config
doubleclick nice nano reset button to mount
cp build/left/zephyr/zmk.uf2 /run/media/jacob/NICENANO/CURRENT.UF2
