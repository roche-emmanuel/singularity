#! /bin/sh

. `pwd`/tools.sh

cd $PROJECT_DIR

git ls-files --other --exclude-standard
