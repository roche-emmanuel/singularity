#! /bin/sh

for filename in `find $1 -iname "*.h"`
do
    echo "Processing $filename..."    
    cat $filename | sed "s#//@{#// at open curl#" | sed "s#//@}#// at close curl#" | sed "s#@name#stupid_name_tag#" > $filename.fixed
done

for filename in `find $1 -iname "*.h"`
do
    echo "Moving $filename..."    
    mv $filename.fixed $filename
done

echo "Fixing done."
