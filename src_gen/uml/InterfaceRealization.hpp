//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERFACEREALIZATION_HPP
#define UML_INTERFACEREALIZATION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class BehavioredClassifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Interface;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OpaqueExpression;
}

namespace uml 
{
	class Realization;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "Realization.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InterfaceRealization is a specialized realization relationship between a BehavioredClassifier and an Interface. This relationship signifies that the realizing BehavioredClassifier conforms to the contract specified by the Interface.
	<p>From package UML::SimpleClassifiers.</p> */
	class InterfaceRealization:virtual public Realization	{
		public:
 			InterfaceRealization(const InterfaceRealization &) {}
			InterfaceRealization& operator=(InterfaceRealization const&) = delete;
	
		protected:
			InterfaceRealization(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~InterfaceRealization() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Interface> getContract() const = 0;
			
			/*!
			 References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setContract(std::shared_ptr<uml::Interface> _contract) = 0;
			/*!
			 References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::BehavioredClassifier> getImplementingClassifier() const = 0;
			
			/*!
			 References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setImplementingClassifier(std::shared_ptr<uml::BehavioredClassifier> _implementingClassifier) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p> */
			std::shared_ptr<uml::Interface> m_contract;
			/*!
			 References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p> */
			std::shared_ptr<uml::BehavioredClassifier> m_implementingClassifier;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getTarget() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getSource() const = 0; 
	};

}
#endif /* end of include guard: UML_INTERFACEREALIZATION_HPP */

