// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_DataMapOfStyleTransient_HeaderFile
#define _XCAFPrs_DataMapOfStyleTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_XCAFPrs_DataMapNodeOfDataMapOfStyleTransient.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class XCAFPrs_Style;
class Standard_Transient;
class XCAFPrs_DataMapNodeOfDataMapOfStyleTransient;
class XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient;



class XCAFPrs_DataMapOfStyleTransient  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XCAFPrs_DataMapOfStyleTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   XCAFPrs_DataMapOfStyleTransient& Assign (const XCAFPrs_DataMapOfStyleTransient& Other) ;
  XCAFPrs_DataMapOfStyleTransient& operator = (const XCAFPrs_DataMapOfStyleTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~XCAFPrs_DataMapOfStyleTransient()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const XCAFPrs_Style& K, const Handle(Standard_Transient)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const XCAFPrs_Style& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const XCAFPrs_Style& K) ;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Find (const XCAFPrs_Style& K)  const;
 const  Handle(Standard_Transient)& operator() (const XCAFPrs_Style& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(Standard_Transient)& ChangeFind (const XCAFPrs_Style& K) ;
  Handle(Standard_Transient)& operator() (const XCAFPrs_Style& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const XCAFPrs_Style& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const XCAFPrs_Style& K) ;




protected:





private:

  
  Standard_EXPORT XCAFPrs_DataMapOfStyleTransient(const XCAFPrs_DataMapOfStyleTransient& Other);




};







#endif // _XCAFPrs_DataMapOfStyleTransient_HeaderFile
