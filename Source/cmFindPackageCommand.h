/*=========================================================================

  Program:   CMake - Cross-Platform Makefile Generator
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Kitware, Inc., Insight Consortium.  All rights reserved.
  See Copyright.txt or http://www.cmake.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef cmFindPackageCommand_h
#define cmFindPackageCommand_h

#include "cmStandardIncludes.h"
#include "cmCommand.h"

/** \class cmFindPackageCommand
 * \brief Load settings from an external project.
 *
 * cmFindPackageCommand
 */
class cmFindPackageCommand : public cmCommand
{
public:
  /**
   * This is a virtual constructor for the command.
   */
  virtual cmCommand* Clone() 
    {
    return new cmFindPackageCommand;
    }

  /**
   * This is called when the command is first encountered in
   * the CMakeLists.txt file.
   */
  virtual bool InitialPass(std::vector<std::string> const& args);

  /**
   * The name of the command as specified in CMakeList.txt.
   */
  virtual const char* GetName() { return "FIND_PACKAGE";}

  /**
   * Succinct documentation.
   */
  virtual const char* GetTerseDocumentation() 
    {
    return "Load settings for an external project.";
    }

  /**
   * More documentation.
   */
  virtual const char* GetFullDocumentation()
    {
    return
      "FIND_PACKAGE(<name> [major.minor])\n"
      "Finds and loads settings from an external project.  <name>_FOUND will\n"
      "be set to indicate whether the package was found.  Settings that\n"
      "can be used when <name>_FOUND is true are package-specific.";
    }
  
  cmTypeMacro(cmFindPackageCommand, cmCommand);
private:
  bool FindModule(bool& found);
  bool FindConfig();
  std::string SearchForConfig() const;
  bool ReadListFile(const char* f);

  cmStdString Name;
  cmStdString UpperName;
  cmStdString Variable;
  cmStdString Config;
  std::vector<cmStdString> Builds;
  std::vector<cmStdString> Prefixes;
  std::vector<cmStdString> Relatives;
};


#endif
