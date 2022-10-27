#!/bin/sh

notefilename="$HOME/Documents/main-vault/bashnote-$(date +%Y-%m-%d).md"

if [ ! -f $notefilename ]; then
    echo "## Notes for $(date +%Y-%m-%d)" > $notefilename
    echo "links: [[$(date +%Y-%m-%d)]]" >> $notefilename
fi

nvim -c "norm Go" \
    -c "norm Go### $(date +%H:%M:%S)" \
    -c "norm G2o" \
    -c "norm zz" \
    -c "startinsert" $notefilename

