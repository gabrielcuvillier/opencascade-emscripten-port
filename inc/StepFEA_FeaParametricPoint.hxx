// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaParametricPoint_HeaderFile
#define _StepFEA_FeaParametricPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaParametricPoint_HeaderFile
#include <Handle_StepFEA_FeaParametricPoint.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _StepGeom_Point_HeaderFile
#include <StepGeom_Point.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;


//! Representation of STEP entity FeaParametricPoint <br>
class StepFEA_FeaParametricPoint : public StepGeom_Point {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaParametricPoint();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(TColStd_HArray1OfReal)& aCoordinates) ;
  //! Returns field Coordinates <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal Coordinates() const;
  //! Set field Coordinates <br>
  Standard_EXPORT     void SetCoordinates(const Handle(TColStd_HArray1OfReal)& Coordinates) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaParametricPoint)

protected:




private: 


Handle_TColStd_HArray1OfReal theCoordinates;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif