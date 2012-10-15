#! /bin/sh

. `pwd`/tools.sh

cd $PROJECT_DIR

DEFINE_string 'message' '' 'Specify the commit message' 'm'
DEFINE_boolean 'local' false 'Perform local commit to GIT only' 'l'
DEFINE_boolean 'dryrun' false 'Perform dryrun operation' 'd'

# parse the command-line
FLAGS "$@" || exit 1
eval set -- "${FLAGS_ARGV}"

# 1. List the unversioned files:
tmpfile=`generateTempFile`

cd $PROJECT_DIR
git ls-files --other --exclude-standard >> $tmpfile

if [[ -s $tmpfile ]] ; then
	echo "Found the following unversioned files:"
	cat $tmpfile
	echo ""
	echo -n "Do you want to commit all the unversioned files ? (yes/no/cancel)[cancel]: "
	read answer
	if [ -z "$answer" ]; then answer="cancel"; fi
	if [ "$answer" == "cancel" -o "$answer" == "c" ]; then
		# cancel the process:
		echo "Cancelling commit process."
		exit 0
	elif [ "$answer" == "yes" -o "$answer" == "y" ]; then
        git add .
	fi
fi

# Commit the files:
msg=${FLAGS_message}

commit_opt=""
if [ ${FLAGS_dryrun} -eq ${FLAGS_TRUE} ]; then
	commit_opt="$commit_opt --dry-run"
fi

git commit $commit_opt -a -m "$msg"
