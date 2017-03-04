//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ENUMERATIONLITERALENUMERATIONLITERALIMPL_HPP
#define UML_ENUMERATIONLITERALENUMERATIONLITERALIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../EnumerationLiteral.hpp"

#include "impl/InstanceSpecificationImpl.hpp"



//*********************************
namespace uml 
{
	class EnumerationLiteralImpl :virtual public InstanceSpecificationImpl, virtual public EnumerationLiteral 
	{
		public: 
			EnumerationLiteralImpl(const EnumerationLiteralImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EnumerationLiteralImpl& operator=(EnumerationLiteralImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			EnumerationLiteralImpl();

		public:
			//destructor
			virtual ~EnumerationLiteralImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getClassifiers()  ;
			
			
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Enumeration that this EnumerationLiteral is a member of.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Enumeration> getEnumeration() const ;
			
			/*!
			 The Enumeration that this EnumerationLiteral is a member of.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setEnumeration(std::shared_ptr<uml::Enumeration> _enumeration) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ENUMERATIONLITERALENUMERATIONLITERALIMPL_HPP */

