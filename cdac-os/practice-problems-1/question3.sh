
#a

mkdir -p projects/source projects/archive/

#b

touch projects/source/app.py projects/source/config.yaml projects/source/README.md

#c

cp projects/source/app.py projects/archive/ && cp projects/source/config.yaml projects/archive/

#d

chmod 760 projects/archive/*.yaml

#e

ls -la projects/archive/ 
