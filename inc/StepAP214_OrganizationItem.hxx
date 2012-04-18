// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_OrganizationItem_HeaderFile
#define _StepAP214_OrganizationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepAP214_ApprovalItem_HeaderFile
#include <StepAP214_ApprovalItem.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepAP214_AppliedOrganizationAssignment_HeaderFile
#include <Handle_StepAP214_AppliedOrganizationAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_Approval_HeaderFile
#include <Handle_StepBasic_Approval.hxx>
#endif
class Standard_Transient;
class StepAP214_AppliedOrganizationAssignment;
class StepBasic_Approval;



class StepAP214_OrganizationItem  : public StepAP214_ApprovalItem {
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

  //! Returns a OrganizationItem SelectType <br>
  Standard_EXPORT   StepAP214_OrganizationItem();
  //! Recognizes a OrganizationItem Kind Entity that is : <br>
  Standard_EXPORT   virtual  Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a AppliedOrganizationAssignment (Null if another type) <br>
  Standard_EXPORT     Handle_StepAP214_AppliedOrganizationAssignment AppliedOrganizationAssignment() const;
  //! returns Value as a Approval (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Approval Approval() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif