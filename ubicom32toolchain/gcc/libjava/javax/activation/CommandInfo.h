
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_activation_CommandInfo__
#define __javax_activation_CommandInfo__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace activation
    {
        class CommandInfo;
        class DataHandler;
    }
  }
}

class javax::activation::CommandInfo : public ::java::lang::Object
{

public:
  CommandInfo(::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String * getCommandName();
  virtual ::java::lang::String * getCommandClass();
  virtual ::java::lang::Object * getCommandObject(::javax::activation::DataHandler *, ::java::lang::ClassLoader *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) verb;
  ::java::lang::String * className;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_activation_CommandInfo__