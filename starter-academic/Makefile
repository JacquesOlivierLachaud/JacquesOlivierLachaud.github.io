all:	hugo install

server:
	hugo server --cacheDir /tmp/cache/

hugo: 
	@echo "Create static public website with  hugo"
	hugo --cacheDir /tmp/cache/

install:
	@echo "Install on www.lama.univ-savoie.fr"
	rsync -ru public jlach@193.48.121.226:/var/www/html/pagesmembres/lachaud/.

