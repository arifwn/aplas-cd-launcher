BOOTSTRAP = ./css/main.css
BOOTSTRAP_LESS = ./less/main.less
JS_DIR = ./js
COFFEE_FILES = ./coffee/*.coffee
DATE=$(shell date +%I:%M%p)
CHECK=✔
HR=\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#


#
# BUILD DOCS
#

build:
	@echo "${HR}"
	@echo "Building Bootstrap..."
	@echo "${HR}"
	@recess --compile ${BOOTSTRAP_LESS} > ${BOOTSTRAP}
	@echo "Compiling LESS with Recess...               ${CHECK} Done"
	@echo "${HR}"
	@coffee -o ${JS_DIR} -c ${COFFEE_FILES}
	@echo "Compiling CoffeeScript files...             ${CHECK} Done"
	@echo "${HR}"
	@echo "Bootstrap successfully built at ${DATE}."
	@echo "${HR}"


#
# WATCH LESS FILES
#

watch:
	echo "Watching less files..."; \
	watchr -e "watch('less/.*\.less') { system 'make' }"


.PHONY: docs watch gh-pages
