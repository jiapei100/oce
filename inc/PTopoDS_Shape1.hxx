// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_Shape1_HeaderFile
#define _PTopoDS_Shape1_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PTopoDS_TShape1.hxx>
#include <PTopLoc_Location.hxx>
#include <TopAbs_Orientation.hxx>
#include <Standard_Storable.hxx>
#include <Standard_PrimitiveTypes.hxx>
class PTopoDS_TShape1;
class PTopLoc_Location;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PTopoDS_Shape1);

//! The PTopoDS_Shape1 is the Persistent view of a TopoDS_Shape.
//!
//! a  Shape1 contains :
//!
//! - a reference to a TShape1.
//!
//! - a Location  to put the TShape1 in  a local coordinate
//! system.
//!
//! - an Orientation.
//!
//! It inherits from ExternShareable, so that it can be shared
//! by other objects located outside the container.
class PTopoDS_Shape1 
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PTopoDS_Shape1();
  
  Standard_EXPORT   void Nullify() ;
  
  Standard_EXPORT  const  Handle(PTopoDS_TShape1)& TShape()  const;
  
  Standard_EXPORT   void TShape (const Handle(PTopoDS_TShape1)& T) ;
  
  Standard_EXPORT   PTopLoc_Location Location()  const;
  
  Standard_EXPORT   void Location (const PTopLoc_Location& L) ;
  
  Standard_EXPORT   TopAbs_Orientation Orientation()  const;
  
  Standard_EXPORT   void Orientation (const TopAbs_Orientation O) ;
    Handle(PTopoDS_TShape1) _CSFDB_GetPTopoDS_Shape1myTShape() const { return myTShape; }
    void _CSFDB_SetPTopoDS_Shape1myTShape(const Handle(PTopoDS_TShape1)& p) { myTShape = p; }
    const PTopLoc_Location& _CSFDB_GetPTopoDS_Shape1myLocation() const { return myLocation; }
    TopAbs_Orientation _CSFDB_GetPTopoDS_Shape1myOrient() const { return myOrient; }
    void _CSFDB_SetPTopoDS_Shape1myOrient(const TopAbs_Orientation p) { myOrient = p; }



protected:




private: 


  Handle(PTopoDS_TShape1) myTShape;
  PTopLoc_Location myLocation;
  TopAbs_Orientation myOrient;


};







#endif // _PTopoDS_Shape1_HeaderFile
