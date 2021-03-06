// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_HeaderFile
#define _DrawTrSurf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_CString.hxx>
#include <Handle_Geom_Geometry.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Poly_Triangulation.hxx>
#include <Handle_Poly_Polygon3D.hxx>
#include <Handle_Poly_Polygon2D.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Handle_Geom2d_BezierCurve.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_Geom_BezierSurface.hxx>
#include <Handle_Geom_BSplineSurface.hxx>
#include <Draw_Interpretor.hxx>
class gp_Pnt;
class gp_Pnt2d;
class Geom_Geometry;
class Geom2d_Curve;
class Poly_Triangulation;
class Poly_Polygon3D;
class Poly_Polygon2D;
class Geom_Curve;
class Geom_BezierCurve;
class Geom_BSplineCurve;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;
class Geom_Surface;
class Geom_BezierSurface;
class Geom_BSplineSurface;
class DrawTrSurf_Drawable;
class DrawTrSurf_Point;
class DrawTrSurf_Curve;
class DrawTrSurf_BSplineCurve;
class DrawTrSurf_BezierCurve;
class DrawTrSurf_Curve2d;
class DrawTrSurf_BSplineCurve2d;
class DrawTrSurf_BezierCurve2d;
class DrawTrSurf_Triangulation2D;
class DrawTrSurf_Surface;
class DrawTrSurf_BSplineSurface;
class DrawTrSurf_BezierSurface;
class DrawTrSurf_Triangulation;
class DrawTrSurf_Polygon3D;
class DrawTrSurf_Polygon2D;


//! This  package supports the   display of parametric
//! curves and surfaces.
//!
//! The  Drawable deferred  classes is  inherited from
//! the Drawable3D  class  from  the package Draw,  it
//! adds methods to  draw 3D Curves  and  Curves on 3D
//! Surfaces.
//!
//! The classes Curve Curve2d and Surface are drawable
//! and  can be  used  to  draw a   single  curve from
//! packages Geom or Geom2d or a surface from Geom.
//!
//! The  Triangulation  and Polygon  from the  package
//! Poly are also supported.
class DrawTrSurf 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Sets <G> in the variable <Name>.  Overwrite the
  //! variable if already set.
  Standard_EXPORT static   void Set (const Standard_CString Name, const gp_Pnt& G) ;
  
  //! Sets <G> in the variable <Name>.  Overwrite the
  //! variable if already set.
  Standard_EXPORT static   void Set (const Standard_CString Name, const gp_Pnt2d& G) ;
  
  //! Sets <G> in the variable <Name>.  Overwrite the
  //! variable if already set.
  //! isSenseMarker indicates whether to render the
  //! sense glyph (arrow) for curves or not
  Standard_EXPORT static   void Set (const Standard_CString Name, const Handle(Geom_Geometry)& G, const Standard_Boolean isSenseMarker = Standard_True) ;
  
  //! Sets <C> in the variable <Name>.  Overwrite the
  //! variable if already set.
  //! isSenseMarker indicates whether to render the
  //! sense glyph (arrow) for curves or not
  Standard_EXPORT static   void Set (const Standard_CString Name, const Handle(Geom2d_Curve)& C, const Standard_Boolean isSenseMarker = Standard_True) ;
  
  //! Sets <T> in the variable <Name>.  Overwrite the
  //! variable if already set.
  Standard_EXPORT static   void Set (const Standard_CString Name, const Handle(Poly_Triangulation)& T) ;
  
  //! Sets <P> in the variable <Name>.  Overwrite the
  //! variable if already set.
  Standard_EXPORT static   void Set (const Standard_CString Name, const Handle(Poly_Polygon3D)& P) ;
  
  //! Sets <P> in the variable <Name>.  Overwrite the
  //! variable if already set.
  Standard_EXPORT static   void Set (const Standard_CString Name, const Handle(Poly_Polygon2D)& P) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_Geometry) Get (Standard_CString& Name) ;
  
  //! Gets the variable. Returns False if none and print
  //! a warning message.
  Standard_EXPORT static   Standard_Boolean GetPoint (Standard_CString& Name, gp_Pnt& P) ;
  
  //! Gets the variable. Returns False if none and print
  //! a warning message.
  Standard_EXPORT static   Standard_Boolean GetPoint2d (Standard_CString& Name, gp_Pnt2d& P) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_Curve) GetCurve (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_BezierCurve) GetBezierCurve (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_BSplineCurve) GetBSplineCurve (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom2d_Curve) GetCurve2d (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom2d_BezierCurve) GetBezierCurve2d (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom2d_BSplineCurve) GetBSplineCurve2d (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_Surface) GetSurface (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_BezierSurface) GetBezierSurface (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Geom_BSplineSurface) GetBSplineSurface (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Poly_Triangulation) GetTriangulation (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Poly_Polygon3D) GetPolygon3D (Standard_CString& Name) ;
  
  //! Get  the variable <S>.  Returns a  null  handle if
  //! none, and print a warning message.
  Standard_EXPORT static   Handle(Poly_Polygon2D) GetPolygon2D (Standard_CString& Name) ;
  
  //! defines display commands.
  Standard_EXPORT static   void BasicCommands (Draw_Interpretor& I) ;




protected:





private:




friend class DrawTrSurf_Drawable;
friend class DrawTrSurf_Point;
friend class DrawTrSurf_Curve;
friend class DrawTrSurf_BSplineCurve;
friend class DrawTrSurf_BezierCurve;
friend class DrawTrSurf_Curve2d;
friend class DrawTrSurf_BSplineCurve2d;
friend class DrawTrSurf_BezierCurve2d;
friend class DrawTrSurf_Triangulation2D;
friend class DrawTrSurf_Surface;
friend class DrawTrSurf_BSplineSurface;
friend class DrawTrSurf_BezierSurface;
friend class DrawTrSurf_Triangulation;
friend class DrawTrSurf_Polygon3D;
friend class DrawTrSurf_Polygon2D;

};







#endif // _DrawTrSurf_HeaderFile
