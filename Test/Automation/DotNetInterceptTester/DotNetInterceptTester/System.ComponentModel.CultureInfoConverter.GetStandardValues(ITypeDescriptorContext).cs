using System;

namespace DotNetInterceptTester.My_System.ComponentModel.CultureInfoConverter
{
public class GetStandardValues_System_ComponentModel_CultureInfoConverter_System_ComponentModel_ITypeDescriptorContext
{
public static bool _GetStandardValues_System_ComponentModel_CultureInfoConverter_System_ComponentModel_ITypeDescriptorContext( )
{

   //class object
    System.ComponentModel.CultureInfoConverter _System_ComponentModel_CultureInfoConverter = new System.ComponentModel.CultureInfoConverter();

   //Parameters
   System.ComponentModel.ITypeDescriptorContext context = null;

   //ReturnType/Value
   System.ComponentModel.TypeConverter+StandardValuesCollection returnVal_Real = null;
   System.ComponentModel.TypeConverter+StandardValuesCollection returnVal_Intercepted = null;

   //Exception
   System.Exception exception_Real = null;
   System.Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnVal_Real = _System_ComponentModel_CultureInfoConverter.GetStandardValues(context);
   }

   catch( System.Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnVal_Intercepted = _System_ComponentModel_CultureInfoConverter.GetStandardValues(context);
   }

   catch( System.Exception e )
   {
      exception_Intercepted = e;
   }


   return( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
