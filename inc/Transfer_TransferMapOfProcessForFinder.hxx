// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferMapOfProcessForFinder_HeaderFile
#define _Transfer_TransferMapOfProcessForFinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Transfer_Finder_HeaderFile
#include <Handle_Transfer_Finder.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
#ifndef _Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder_HeaderFile
#include <Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Transfer_Finder;
class Transfer_Binder;
class Transfer_FindHasher;
class Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder;



class Transfer_TransferMapOfProcessForFinder  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   Transfer_TransferMapOfProcessForFinder(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Transfer_TransferMapOfProcessForFinder& Assign(const Transfer_TransferMapOfProcessForFinder& Other) ;
    Transfer_TransferMapOfProcessForFinder& operator =(const Transfer_TransferMapOfProcessForFinder& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Transfer_TransferMapOfProcessForFinder()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(Transfer_Finder)& K,const Handle(Transfer_Binder)& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(Transfer_Finder)& K,const Handle(Transfer_Binder)& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Transfer_Finder)& K) const;
  
  Standard_EXPORT    const Handle_Transfer_Finder& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const Handle_Transfer_Binder& FindFromIndex(const Standard_Integer I) const;
   const Handle_Transfer_Binder& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     Handle_Transfer_Binder& ChangeFromIndex(const Standard_Integer I) ;
    Handle_Transfer_Binder& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(Transfer_Finder)& K) const;
  
  Standard_EXPORT    const Handle_Transfer_Binder& FindFromKey(const Handle(Transfer_Finder)& K) const;
  
  Standard_EXPORT     Handle_Transfer_Binder& ChangeFromKey(const Handle(Transfer_Finder)& K) ;
  
  Standard_EXPORT     Standard_Address FindFromKey1(const Handle(Transfer_Finder)& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFromKey1(const Handle(Transfer_Finder)& K) ;





protected:





private:

  
  Standard_EXPORT   Transfer_TransferMapOfProcessForFinder(const Transfer_TransferMapOfProcessForFinder& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif