// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslateVertex_HeaderFile
#define _StepToTopoDS_TranslateVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepToTopoDS_TranslateVertexError_HeaderFile
#include <StepToTopoDS_TranslateVertexError.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _StepToTopoDS_Root_HeaderFile
#include <StepToTopoDS_Root.hxx>
#endif
#ifndef _Handle_StepShape_Vertex_HeaderFile
#include <Handle_StepShape_Vertex.hxx>
#endif
class StdFail_NotDone;
class StepShape_Vertex;
class StepToTopoDS_Tool;
class StepToTopoDS_NMTool;
class TopoDS_Shape;



//! <br>
class StepToTopoDS_TranslateVertex  : public StepToTopoDS_Root {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   StepToTopoDS_TranslateVertex();
  
  Standard_EXPORT   StepToTopoDS_TranslateVertex(const Handle(StepShape_Vertex)& V,StepToTopoDS_Tool& T,StepToTopoDS_NMTool& NMTool);
  
  Standard_EXPORT     void Init(const Handle(StepShape_Vertex)& V,StepToTopoDS_Tool& T,StepToTopoDS_NMTool& NMTool) ;
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;
  
  Standard_EXPORT     StepToTopoDS_TranslateVertexError Error() const;





protected:





private:



StepToTopoDS_TranslateVertexError myError;
TopoDS_Shape myResult;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif