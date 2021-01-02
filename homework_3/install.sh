#! /bin/bash
rm -rf build
mkdir build
cd build
cmake ..
make install
cd ../bin/
./main > Saeed_html_file.html
mv Saeed_html_file.html web_app
# open ../web_app/Saeed_html_file.html