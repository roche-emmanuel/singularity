r.js -o app/build/app.build.js
cd dist
rm -rf build build.txt scripts/views scripts/vendor scripts/models scripts/collections 
rm -rf scripts/base scripts/templates scripts/libs scripts/config.js 
rm -rf css/buttons.css
# rm -rf build build.txt scripts/views scripts/vendor/backbone-amd scripts/vendor/jquery scripts/vendor/underscore-amd scripts/vendor/almond scripts/vendorscripts/models scripts/collections rm css/buttons.css
sed -i "s/<script data-main=.*/<script src=\"scripts\/main.js\"><\/script>/" index.html
