// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_HeaderFile
#define _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.hxx>
class Standard_NoSuchObject;
class Standard_Type;
class MDF_DriverListOfARDriverTable;
class TColStd_MapTransientHasher;
class MDF_TypeDriverListMapOfARDriverTable;
class MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable;



class MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable();
  
  Standard_EXPORT MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable(const MDF_TypeDriverListMapOfARDriverTable& aMap);
  
  Standard_EXPORT   void Initialize (const MDF_TypeDriverListMapOfARDriverTable& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Type)& Key()  const;
  
  Standard_EXPORT  const  MDF_DriverListOfARDriverTable& Value()  const;




protected:





private:





};







#endif // _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_HeaderFile
