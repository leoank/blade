#include <Poco/DigestStream.h>
#include <Poco/MD5Engine.h>

#include <iostream>

int main()
{
  Poco::MD5Engine md5;
  Poco::DigestOutputStream ds(md5);
  ds << "abcdefghijklmnopqrstuvwxyz";
  ds.close();
  std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;
  return 0;
}

// #include <iostream>
// #include "Poco/BasicEvent.h"
// #include "Poco/Delegate.h"

// using Poco::BasicEvent;
// using Poco::delegate;

// class Source {
//  public:
//   BasicEvent<int> theEvent;

//   void fireEvent(int n) { theEvent(this, n); }
// };

// class Target {
//  public:
//   void onEvent(const void* pSender, int& arg) {
//     std::cout << "onEvent: " << arg << std::endl;
//   }
// };

// int main(int argc, char** argv) {
//   Source source;
//   Target target;

//   source.theEvent += delegate(&target, &Target::onEvent);

//   source.fireEvent(42);

//   source.theEvent -= delegate(&target, &Target::onEvent);

//   return 0;
// }