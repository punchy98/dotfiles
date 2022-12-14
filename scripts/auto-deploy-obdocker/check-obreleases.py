import os
import requests
import json
from packaging import version
import trigger_ghaction_build

r = requests.get("https://api.github.com/repos/obsidianmd/obsidian-releases/tags")

tags = r.json()
tags_list = [e["name"] for e in tags]

latest_version = tags_list[0].lstrip("v")

version_file = open("version.txt", "r+")

previous_version = version_file.readline().rstrip()

if version.parse(latest_version) > version.parse(previous_version):
	version_file.seek(0)
	version_file.truncate()
	version_file.write(latest_version)
	trigger_ghaction_build.main()


version_file.close()