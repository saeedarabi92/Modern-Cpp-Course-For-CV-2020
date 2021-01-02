#! /bin/bash
rm -rf build
rm -rf bin
mkdir build
cd build
cmake ..
make install
cd ../bin/
rm ../web_app/Saeed_html_file.html
./main > Saeed_html_file.html
mv Saeed_html_file.html ../web_app/
# open ../web_app/Saeed_html_file.html
