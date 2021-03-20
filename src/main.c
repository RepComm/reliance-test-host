
//Header guards for not including twice
#ifndef RELIANCE_TEST_HOST
#define RELIANCE_TEST_HOST

#include <stdlib.h>

//Import dynobj lib
#include "../reliance/repcomm/dynobj/src/dynobj.c"

//For DynObj_Json_String definition
#include "../reliance/repcomm/dynobj/src/dynobj.json.c"

//Main program
int main (int argCount, char** args) {
  //Create an object with the dynobj lib
  DynObjP myObj = DynObj_create();

  //Set a property
  myObj->set(myObj, "my-key", "some string value", DynObj_Json_String);

  //Extract the property
  KeyValuePairP pair = myObj->get(myObj, "my-key");

  //Print the value of the property
  printf("%s\n", (char *) pair->valuePointer);

  return 0;
}

#endif
