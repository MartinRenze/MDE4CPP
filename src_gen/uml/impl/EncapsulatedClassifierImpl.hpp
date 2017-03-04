//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ENCAPSULATEDCLASSIFIERENCAPSULATEDCLASSIFIERIMPL_HPP
#define UML_ENCAPSULATEDCLASSIFIERENCAPSULATEDCLASSIFIERIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../EncapsulatedClassifier.hpp"

#include "impl/StructuredClassifierImpl.hpp"



//*********************************
namespace uml 
{
	class EncapsulatedClassifierImpl :virtual public StructuredClassifierImpl, virtual public EncapsulatedClassifier 
	{
		public: 
			EncapsulatedClassifierImpl(const EncapsulatedClassifierImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EncapsulatedClassifierImpl& operator=(EncapsulatedClassifierImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			EncapsulatedClassifierImpl();

		public:
			//destructor
			virtual ~EncapsulatedClassifierImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Derivation for EncapsulatedClassifier::/ownedPort : Port
			result = (ownedAttribute->select(oclIsKindOf(Port))->collect(oclAsType(Port))->asOrderedSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Port>>> getOwnedPorts()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Ports owned by the EncapsulatedClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Port>>> getOwnedPort() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Property>>> getAttribute() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> getOwnedMember() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> getMember() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const ;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ConnectableElement>>> getRole() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ENCAPSULATEDCLASSIFIERENCAPSULATEDCLASSIFIERIMPL_HPP */

