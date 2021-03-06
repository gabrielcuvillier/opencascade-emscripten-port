// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray1OfInteger_HeaderFile
#define _TColStd_HArray1OfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>

#include <TColStd_Array1OfInteger.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TColStd_Array1OfInteger;



class TColStd_HArray1OfInteger : public MMgt_TShared
{

public:

  
    TColStd_HArray1OfInteger(const Standard_Integer Low, const Standard_Integer Up);
  
    TColStd_HArray1OfInteger(const Standard_Integer Low, const Standard_Integer Up, const Standard_Integer& V);
  
      void Init (const Standard_Integer& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Standard_Integer& Value) ;
  
     const  Standard_Integer& Value (const Standard_Integer Index)  const;
  
      Standard_Integer& ChangeValue (const Standard_Integer Index) ;
  
     const  TColStd_Array1OfInteger& Array1()  const;
  
      TColStd_Array1OfInteger& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray1OfInteger)

protected:




private: 


  TColStd_Array1OfInteger myArray;


};

#define ItemHArray1 Standard_Integer
#define ItemHArray1_hxx <Standard_Integer.hxx>
#define TheArray1 TColStd_Array1OfInteger
#define TheArray1_hxx <TColStd_Array1OfInteger.hxx>
#define TCollection_HArray1 TColStd_HArray1OfInteger
#define TCollection_HArray1_hxx <TColStd_HArray1OfInteger.hxx>
#define Handle_TCollection_HArray1 Handle_TColStd_HArray1OfInteger
#define TCollection_HArray1_Type_() TColStd_HArray1OfInteger_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TColStd_HArray1OfInteger_HeaderFile
