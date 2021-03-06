// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_HArray1OfBSplineCurve_HeaderFile
#define _TColGeom_HArray1OfBSplineCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColGeom_HArray1OfBSplineCurve.hxx>

#include <TColGeom_Array1OfBSplineCurve.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Geom_BSplineCurve;
class TColGeom_Array1OfBSplineCurve;



class TColGeom_HArray1OfBSplineCurve : public MMgt_TShared
{

public:

  
    TColGeom_HArray1OfBSplineCurve(const Standard_Integer Low, const Standard_Integer Up);
  
    TColGeom_HArray1OfBSplineCurve(const Standard_Integer Low, const Standard_Integer Up, const Handle(Geom_BSplineCurve)& V);
  
      void Init (const Handle(Geom_BSplineCurve)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Geom_BSplineCurve)& Value) ;
  
     const  Handle(Geom_BSplineCurve)& Value (const Standard_Integer Index)  const;
  
      Handle(Geom_BSplineCurve)& ChangeValue (const Standard_Integer Index) ;
  
     const  TColGeom_Array1OfBSplineCurve& Array1()  const;
  
      TColGeom_Array1OfBSplineCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColGeom_HArray1OfBSplineCurve)

protected:




private: 


  TColGeom_Array1OfBSplineCurve myArray;


};

#define ItemHArray1 Handle(Geom_BSplineCurve)
#define ItemHArray1_hxx <Geom_BSplineCurve.hxx>
#define TheArray1 TColGeom_Array1OfBSplineCurve
#define TheArray1_hxx <TColGeom_Array1OfBSplineCurve.hxx>
#define TCollection_HArray1 TColGeom_HArray1OfBSplineCurve
#define TCollection_HArray1_hxx <TColGeom_HArray1OfBSplineCurve.hxx>
#define Handle_TCollection_HArray1 Handle_TColGeom_HArray1OfBSplineCurve
#define TCollection_HArray1_Type_() TColGeom_HArray1OfBSplineCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TColGeom_HArray1OfBSplineCurve_HeaderFile
