// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_TokensSequence_HeaderFile
#define _Units_TokensSequence_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Units_TokensSequence.hxx>

#include <Units_TksSequence.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Units_Token.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Units_Token;
class Units_TksSequence;



class Units_TokensSequence : public MMgt_TShared
{

public:

  
    Units_TokensSequence();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(Units_Token)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(Units_TokensSequence)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(Units_Token)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(Units_TokensSequence)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Units_Token)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Units_TokensSequence)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Units_Token)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Units_TokensSequence)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(Units_TokensSequence) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(Units_Token)& anItem) ;
  
  Standard_EXPORT  const  Handle(Units_Token)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(Units_Token)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  Units_TksSequence& Sequence()  const;
  
      Units_TksSequence& ChangeSequence() ;




  DEFINE_STANDARD_RTTI(Units_TokensSequence)

protected:




private: 


  Units_TksSequence mySequence;


};

#define Item Handle(Units_Token)
#define Item_hxx <Units_Token.hxx>
#define TheSequence Units_TksSequence
#define TheSequence_hxx <Units_TksSequence.hxx>
#define TCollection_HSequence Units_TokensSequence
#define TCollection_HSequence_hxx <Units_TokensSequence.hxx>
#define Handle_TCollection_HSequence Handle_Units_TokensSequence
#define TCollection_HSequence_Type_() Units_TokensSequence_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_




#endif // _Units_TokensSequence_HeaderFile
