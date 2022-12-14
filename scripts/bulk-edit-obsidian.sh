#!/bin/bash

FILES="- Unix Security"
for f in *"$FILES".md
do
    #list all matching files 
    echo "$f"
    #find and replace string with another string
    sed -i 's/#unixsec/[unix-security]/g' "$f"
    #prepend frontmatter
    #echo -e "---\nDate: 2022-11-10 \nTags: #unixsec\n---\n$(cat "$f")" > "$f" 
    #prepend frontmatter if missing
    #grep -xqF -- "---" "$f"
    # || echo -e "---\n---\n$(cat "$f")" > "$f" 
done

