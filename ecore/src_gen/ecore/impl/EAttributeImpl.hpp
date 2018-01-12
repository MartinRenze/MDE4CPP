//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EATTRIBUTEEATTRIBUTEIMPL_HPP
#define ECORE_EATTRIBUTEEATTRIBUTEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../EAttribute.hpp"

#include "impl/EStructuralFeatureImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EAttributeImpl :virtual public EStructuralFeatureImpl, virtual public EAttribute 
	{
		public: 
			EAttributeImpl(const EAttributeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EAttributeImpl& operator=(EAttributeImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EAttributeImpl();

			//Additional constructors for the containments back reference
			EAttributeImpl(std::weak_ptr<ecore::EClass > par_eContainingClass);




		public:
			//destructor
			virtual ~EAttributeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isID() const ;
			
			/*!
			 */ 
			virtual void setID (bool _iD); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EDataType > getEAttributeType() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EATTRIBUTEEATTRIBUTEIMPL_HPP */

