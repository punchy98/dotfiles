#SUBSYSTEM=="power_supply", ENV{POWER_SUPPLY_ONLINE}=="0", \
#    RUN+="/home/punchy/dotfiles/i3/battery-combined-udev.sh --update"
SUBSYSTEM=="power_supply", ENV{POWER_SUPPLY_ONLINE}=="1", \
    RUN+="/home/user/.config/polybar/battery-combined-udev.sh --update"

