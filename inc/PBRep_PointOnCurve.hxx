// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PointOnCurve_HeaderFile
#define _PBRep_PointOnCurve_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PBRep_PointOnCurve.hxx>

#include <Handle_PGeom_Curve.hxx>
#include <Standard_Boolean.hxx>
#include <PBRep_PointRepresentation.hxx>
#include <Standard_Real.hxx>
class PGeom_Curve;
class PTopLoc_Location;


class PBRep_PointOnCurve : public PBRep_PointRepresentation
{

public:

  
  Standard_EXPORT PBRep_PointOnCurve(const Standard_Real P, const Handle(PGeom_Curve)& C, const PTopLoc_Location& L);
  
  Standard_EXPORT   Handle(PGeom_Curve) Curve()  const;
  
  //! Returns True;
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurve()  const;

PBRep_PointOnCurve( )
{
  
}
PBRep_PointOnCurve(const Storage_stCONSTclCOM& a) : PBRep_PointRepresentation(a)
{
  
}
    Handle(PGeom_Curve) _CSFDB_GetPBRep_PointOnCurvemyCurve() const { return myCurve; }
    void _CSFDB_SetPBRep_PointOnCurvemyCurve(const Handle(PGeom_Curve)& p) { myCurve = p; }



  DEFINE_STANDARD_RTTI(PBRep_PointOnCurve)

protected:




private: 


  Handle(PGeom_Curve) myCurve;


};







#endif // _PBRep_PointOnCurve_HeaderFile
