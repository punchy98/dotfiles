#!/bin/bash

# Terminate already running bar instances
killall -q polybar
# If all your bars have ipc enabled, you can also use
# polybar-msg cmd quit
if type "xrandr"; then
  for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
    MONITOR=$m polybar --reload mainscreen -c ~/dotfiles/polybar/polybar-config-gruvbox.ini &

  done
else
  polybar --reload mainscreen -c ~/dotfiles/polybar/polybar-config-gruvbox.ini &
fi
# Launch Polybar, using default config location ~/.config/polybar/config.ini
#polybar -c ~/dotfiles/i3/polybar-config.ini
#mybar 2>&1 | tee -a /tmp/polybar.log & disown

echo "Polybar launched..."
