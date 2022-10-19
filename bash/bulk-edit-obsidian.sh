#!/bin/bash

FILES=""
for f in *"$FILES".md
do
    #list all matching files 
    echo "$f"
    #find and replace string with another string
    #sed -i 's/Language/tool/g' "$f"
    #prepend frontmatter
    #echo -e "---\nDate: 2022-09-20 \nTags: #IaC tool notes\nLanguage: Chef\n---\n$(cat "$f")" > "$f" 
    #prepend frontmatter if missing
    grep -xqF -- "---" "$f"
    # || echo -e "---\n---\n$(cat "$f")" > "$f" 
done

