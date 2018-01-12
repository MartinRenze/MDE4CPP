//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EMODELELEMENTEMODELELEMENTIMPL_HPP
#define ECORE_EMODELELEMENTEMODELELEMENTIMPL_HPP

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
#include "../EModelElement.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EModelElementImpl :virtual public ecore::EObjectImpl,
virtual public EModelElement 
	{
		public: 
			EModelElementImpl(const EModelElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EModelElementImpl& operator=(EModelElementImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EModelElementImpl();



		public:
			//destructor
			virtual ~EModelElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EAnnotation> getEAnnotation(std::string source)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EAnnotation> > getEAnnotations() const ;
			
							
			
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
#endif /* end of include guard: ECORE_EMODELELEMENTEMODELELEMENTIMPL_HPP */

