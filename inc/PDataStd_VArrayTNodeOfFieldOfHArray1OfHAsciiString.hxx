// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString_HeaderFile
#define _PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PCollection_HAsciiString.hxx>
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString.hxx>
#include <Standard_Address.hxx>
class PCollection_HAsciiString;
class PDataStd_FieldOfHArray1OfHAsciiString;
class PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString;



class PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString();
  
    PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString(const Handle(PCollection_HAsciiString)& aValue);
  
      void SetValue (const Handle(PCollection_HAsciiString)& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  Handle(PCollection_HAsciiString) myValue;


};

#define Item Handle(PCollection_HAsciiString)
#define Item_hxx <PCollection_HAsciiString.hxx>
#define DBC_VArrayNode PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString
#define DBC_VArrayNode_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString.hxx>
#define DBC_VArrayTNode PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString
#define DBC_VArrayTNode_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString.hxx>
#define Handle_DBC_VArrayNode Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString
#define DBC_VArrayNode_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString_Type_()
#define DBC_VArray PDataStd_FieldOfHArray1OfHAsciiString
#define DBC_VArray_hxx <PDataStd_FieldOfHArray1OfHAsciiString.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx




#endif // _PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString_HeaderFile
