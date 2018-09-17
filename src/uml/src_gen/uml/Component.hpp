//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMPONENT_HPP
#define UML_COMPONENT_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ComponentRealization;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class Connector;
}

namespace uml 
{
	class Constraint;
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
	class ElementImport;
}

namespace uml 
{
	class Enumeration;
}

namespace uml 
{
	class Extension;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class Interface;
}

namespace uml 
{
	class InterfaceRealization;
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
	class Operation;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class PrimitiveType;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class Reception;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "uml/Class.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
	<p>From package UML::StructuredClassifiers.</p> */
	class Component:virtual public Class
	{
		public:
 			Component(const Component &) {}
			Component& operator=(Component const&) = delete;

		protected:
			Component(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Component() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates a(n) (abstract) class with the specified name as a packaged element of this component. */ 
			virtual std::shared_ptr<uml::Class> createOwnedClass(std::string name,bool isAbstract) = 0;
			
			/*!
			 Creates a enumeration with the specified name as a packaged element of this component. */ 
			virtual std::shared_ptr<uml::Enumeration> createOwnedEnumeration(std::string name) = 0;
			
			/*!
			 Creates an interface with the specified name as a packaged element of this component. */ 
			virtual std::shared_ptr<uml::Interface> createOwnedInterface(std::string name) = 0;
			
			/*!
			 Creates a primitive type with the specified name as a packaged element of this component. */ 
			virtual std::shared_ptr<uml::PrimitiveType> createOwnedPrimitiveType(std::string name) = 0;
			
			/*!
			 Derivation for Component::/provided
			result = (let 	ris : Set(Interface) = allRealizedInterfaces(),
			        realizingClassifiers : Set(Classifier) =  self.realization.realizingClassifier->union(self.allParents()->collect(realization.realizingClassifier))->asSet(),
			        allRealizingClassifiers : Set(Classifier) = realizingClassifiers->union(realizingClassifiers.allParents())->asSet(),
			        realizingClassifierInterfaces : Set(Interface) = allRealizingClassifiers->iterate(c; rci : Set(Interface) = Set{} | rci->union(c.allRealizedInterfaces())),
			        ports : Set(Port) = self.ownedPort->union(allParents()->collect(ownedPort))->asSet(),
			        providedByPorts : Set(Interface) = ports.provided->asSet()
			in     ris->union(realizingClassifierInterfaces) ->union(providedByPorts)->asSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getProvideds() = 0;
			
			/*!
			 Derivation for Component::/required
			result = (let 	uis : Set(Interface) = allUsedInterfaces(),
			        realizingClassifiers : Set(Classifier) = self.realization.realizingClassifier->union(self.allParents()->collect(realization.realizingClassifier))->asSet(),
			        allRealizingClassifiers : Set(Classifier) = realizingClassifiers->union(realizingClassifiers.allParents())->asSet(),
			        realizingClassifierInterfaces : Set(Interface) = allRealizingClassifiers->iterate(c; rci : Set(Interface) = Set{} | rci->union(c.allUsedInterfaces())),
			        ports : Set(Port) = self.ownedPort->union(allParents()->collect(ownedPort))->asSet(),
			        usedByPorts : Set(Interface) = ports.required->asSet()
			in	    uis->union(realizingClassifierInterfaces)->union(usedByPorts)->asSet()
			)
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getRequireds() = 0;
			
			/*!
			 A Component cannot nest Classifiers.
			nestedClassifier->isEmpty() */ 
			virtual bool no_nested_classifiers(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 A Component nested in a Class cannot have any packaged elements.
			nestingClass <> null implies packagedElement->isEmpty() */ 
			virtual bool no_packaged_elements(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the Component is instantiated indirectly, through the instantiation of its realizing Classifiers or parts.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsIndirectlyInstantiated() const = 0;
			
			/*!
			 If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the Component is instantiated indirectly, through the instantiation of its realizing Classifiers or parts.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsIndirectlyInstantiated (bool _isIndirectlyInstantiated)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of PackageableElements that a Component owns. In the namespace of a Component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g., Classes, Interfaces, Components, Packages, UseCases, Dependencies (e.g., mappings), and Artifacts.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::PackageableElement, uml::NamedElement>> getPackagedElement() const = 0;
			
			/*!
			 The Interfaces that the Component exposes to its environment. These Interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Interface>> getProvided() const = 0;
			
			/*!
			 The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::ComponentRealization, uml::Element>> getRealization() const = 0;
			
			/*!
			 The Interfaces that the Component requires from other Components in its environment in order to be able to offer its full set of provided functionality. These Interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Interface>> getRequired() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the Component is instantiated indirectly, through the instantiation of its realizing Classifiers or parts.
			<p>From package UML::StructuredClassifiers.</p> */ 
			bool m_isIndirectlyInstantiated = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The set of PackageableElements that a Component owns. In the namespace of a Component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g., Classes, Interfaces, Components, Packages, UseCases, Dependencies (e.g., mappings), and Artifacts.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::PackageableElement, uml::NamedElement>> m_packagedElement;
			/*!
			 The Interfaces that the Component exposes to its environment. These Interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Interface>> m_provided;
			/*!
			 The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::ComponentRealization, uml::Element>> m_realization;
			/*!
			 The Interfaces that the Component requires from other Components in its environment in order to be able to offer its full set of provided functionality. These Interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Interface>> m_required;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_COMPONENT_HPP */
