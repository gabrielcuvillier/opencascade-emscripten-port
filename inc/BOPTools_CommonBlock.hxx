// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_CommonBlock_HeaderFile
#define _BOPTools_CommonBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPTools_PaveBlock_HeaderFile
#include <BOPTools_PaveBlock.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class BOPTools_PaveBlock;



//!  The class hold a structure  for storing info about a couple <br>
//!  of pave blocks that are considered as common <br>
class BOPTools_CommonBlock  {
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

  
//! Empty constructor <br>
  Standard_EXPORT   BOPTools_CommonBlock();
  
//! Constructor that uses couple of pave blocks <br>
  Standard_EXPORT   BOPTools_CommonBlock(const BOPTools_PaveBlock& aPB1,const BOPTools_PaveBlock& aPB2);
  
//! Constructor that uses a pave block and a face <br>
  Standard_EXPORT   BOPTools_CommonBlock(const BOPTools_PaveBlock& aPB1,const Standard_Integer aF);
  
//! Modifier <br>
//! Sets first block <br>
  Standard_EXPORT     void SetPaveBlock1(const BOPTools_PaveBlock& aPB1) ;
  
//! Modifier <br>
//! Sets second block <br>
  Standard_EXPORT     void SetPaveBlock2(const BOPTools_PaveBlock& aPB2) ;
  
//! Modifier <br>
//! Sets DS-index of the face (if it exists) with which the <br>
//! CommonBlock is common. 0 is  default value <br>
  Standard_EXPORT     void SetFace(const Standard_Integer aF) ;
  
//! Selector <br>
//! Always returns first block myPB1 <br>
  Standard_EXPORT    const BOPTools_PaveBlock& PaveBlock1() const;
  
//! Selector <br>
//! Returns block that belongs to the original edge with <br>
//! DS-index=anIndex <br>
  Standard_EXPORT     BOPTools_PaveBlock& PaveBlock1(const Standard_Integer anIndex) ;
  
//! Selector <br>
//! Always returns first block myPB2 <br>
  Standard_EXPORT    const BOPTools_PaveBlock& PaveBlock2() const;
  
//! Selector <br>
//! Returns block that does not belong to the original edge with <br>
//! DS-index=anIndex <br>
  Standard_EXPORT     BOPTools_PaveBlock& PaveBlock2(const Standard_Integer anIndex) ;
  
//! Selector <br>
//! Returns  the DS-index of the face (if exists) <br>
//! with which the CommonBlock is common. <br>
//! Otherwise it returns 0. <br>
  Standard_EXPORT     Standard_Integer Face() const;





protected:





private:



BOPTools_PaveBlock myPB1;
BOPTools_PaveBlock myPB2;
Standard_Integer myFace;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif