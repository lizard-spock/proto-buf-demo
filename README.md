# proto-buf-demo
This is a repo that I use to test how proto-buf works in serializing/deserializing data. 

## Steps to make protocol buffer:
1. Write the .proto message file that correspond to the C++ struct

2. Download a compiler from https://github.com/protocolbuffers/protobuf/releases/tag/v22.1 

3. Compile your message using protoc:
  protoc -I=$SRC_DIR --cpp_out=$DST_DIR $SRC_DIR/addressbook.proto
  <SRC_DIS> is 
  
  Example for current directory: protoc definedProtoMessage.proto --cpp_out=.
  
  

Decoding: https://medium.com/@yashschandra/an-inner-view-to-protobuf-encoding-e668f37847d5 
