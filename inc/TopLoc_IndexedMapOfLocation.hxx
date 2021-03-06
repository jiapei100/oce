// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_IndexedMapOfLocation_HeaderFile
#define _TopLoc_IndexedMapOfLocation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopLoc_IndexedMapNodeOfIndexedMapOfLocation.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class TopLoc_Location;
class TopLoc_MapLocationHasher;
class TopLoc_IndexedMapNodeOfIndexedMapOfLocation;



class TopLoc_IndexedMapOfLocation  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopLoc_IndexedMapOfLocation(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TopLoc_IndexedMapOfLocation(const TopLoc_IndexedMapOfLocation& Other);
  
  Standard_EXPORT   TopLoc_IndexedMapOfLocation& Assign (const TopLoc_IndexedMapOfLocation& Other) ;
  TopLoc_IndexedMapOfLocation& operator = (const TopLoc_IndexedMapOfLocation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopLoc_IndexedMapOfLocation()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopLoc_Location& K) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopLoc_Location& K) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopLoc_Location& K)  const;
  
  Standard_EXPORT  const  TopLoc_Location& FindKey (const Standard_Integer I)  const;
 const  TopLoc_Location& operator () (const Standard_Integer I)  const
{
  return FindKey(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopLoc_Location& K)  const;




protected:





private:





};







#endif // _TopLoc_IndexedMapOfLocation_HeaderFile
