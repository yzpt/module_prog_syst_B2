sudo apt-get install build-essential
sudo apt-get install gcc

gcc exercice.c -o exercice
./exercice

# gh create repo module_prog_systeme private
gh repo create module_prog_systeme --private

# delete .git
rm -rf .git -f


git init
git branch -M main
git remote add origin https://github.com/yzpt/module_prog_systeme.git
git add .
git commit -m "exos & orga"
git push -u origin main
# git push -u origin main --force

# github set public
gh repo edit yzpt/module_prog_systeme --visibility public --accept-visibility-change-consequences 

# github repo set private
gh repo edit yzpt/module_prog_systeme --visibility private --accept-visibility-change-consequences