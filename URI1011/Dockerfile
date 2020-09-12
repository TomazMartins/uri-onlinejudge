# GCC support can be specified at major, minor, or micro version
# (e.g. 8, 8.2 or 8.2.0).
# See https://hub.docker.com/r/library/gcc/ for all supported GCC
# tags from Docker Hub.
# See https://docs.docker.com/samples/library/gcc/ for more on how to use this image
FROM gcc:latest

# These commands copy your files into the specified directory in the image
# and set that as the working location
COPY . /usr/src/uri_online_judge/uri-1011/app
WORKDIR /usr/src/uri_online_judge/uri-1011/app

# This command compiles your app using GCC, adjust for your source code
RUN g++ -std=c++17 -o app src/main.cpp

# This command runs your application, comment out this line to compile only
CMD ["./app"]

LABEL Name=uri-online-judge Version=0.0.1
