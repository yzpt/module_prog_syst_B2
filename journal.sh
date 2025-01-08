sudo apt-get install build-essential
sudo apt-get install gcc

sudo apt update 


gcc exercice.c -o exercice
./exercice

# gh create repo module_prog_syst_B2 private
gh repo create module_prog_syst_B2 --public

#gh repo delete
gh repo delete yzpt/module_prog_systeme --confirm

# delete .git
rm -rf .git -f


git init
git branch -M main
git remote add origin https://github.com/yzpt/module_prog_syst_B2.git
git add .
git commit -m "exos & orga"
git push -u origin main
# git push -u origin main --force

# github set public
gh repo edit yzpt/module_prog_syst_B2 --visibility public --accept-visibility-change-consequences 

# github repo set private
gh repo edit yzpt/module_prog_syst_B2 --visibility private --accept-visibility-change-consequences


