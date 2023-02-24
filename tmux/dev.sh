tmux new-session -s dev -d -n rust
tmux new-window -n oracle-console
tmux new-window -n oracle-docker-output
tmux send-keys "docker start oracle_db" Enter
tmux attach-session -t dev
