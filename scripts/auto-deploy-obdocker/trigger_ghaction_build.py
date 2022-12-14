import requests
import os

def main():
  headers = {
  "Accept": "application/vnd.github.v3+json",
  "Authorization": "token {--------------------------}",
  "Content-type": "application/json",
  }


  r = requests.post(f"https://api.github.com/repos/punchy98/obsidian-remote/actions/workflows/build-on-new-ver.yml/dispatches",json={ "ref": "main" },headers=headers)

  print (r.status_code)



if __name__ == "__main__":
  main()
