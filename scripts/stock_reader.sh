#! /bin/sh

# version 1
lockfile=stock_reader.lock
logfile=stock_reader_launcher.log

pid=$$

logInfo()
{
	curtime=$(date +%D-%T)
	echo "[$pid] $curtime: $1" >> $logfile
	echo "[$pid] $curtime: $1"
}

lockProcess()
{
	logInfo "Writing lock file."
	touch $lockfile
}

unlockProcess()
{
	logInfo "Removing lock file."
	rm $lockfile
}

logInfo "Starting stock reader"

# check if the lock file is written:
if [ ! -e "$lockfile" ]; then
	lockProcess
	
	logInfo "Executing stock reader"
	export LD_LIBRARY_PATH=/volume1/homes/kenshin/singularity/software/bin/ds411:/usr/syno/mysql/lib/mysql
	stock_reader.lua --log stock_reader.log > log_result.log 2>&1
	logInfo "Stock reader died."
	
	unlockProcess
fi

logInfo "Stock reader done."
