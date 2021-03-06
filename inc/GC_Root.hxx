// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_Root_HeaderFile
#define _GC_Root_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gce_ErrorType.hxx>
#include <Standard_Boolean.hxx>


//! This class implements the common services for
//! all classes of gce which report error.
class GC_Root 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns true if the construction is successful.
      Standard_Boolean IsDone()  const;
  

  //! Returns the status of the construction:
  //! -   gce_Done, if the construction is successful, or
  //! -   another value of the gce_ErrorType enumeration
  //! indicating why the construction failed.
      gce_ErrorType Status()  const;




protected:



  gce_ErrorType TheError;


private:





};


#include <GC_Root.lxx>





#endif // _GC_Root_HeaderFile
