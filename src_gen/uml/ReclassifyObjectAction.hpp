//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RECLASSIFYOBJECTACTION_HPP
#define UML_RECLASSIFYOBJECTACTION_HPP

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
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
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
	class ExceptionHandler;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OutputPin;
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
	class StructuredActivityNode;
}

// base class includes
#include "Action.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ReclassifyObjectAction is an Action that changes the Classifiers that classify an object.
	<p>From package UML::Actions.</p> */
	class ReclassifyObjectAction:virtual public Action	{
		public:
 			ReclassifyObjectAction(const ReclassifyObjectAction &) {}
			ReclassifyObjectAction& operator=(ReclassifyObjectAction const&) = delete;
	
		protected:
			ReclassifyObjectAction(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ReclassifyObjectAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The object InputPin has no type.
			object.type = null */ 
			virtual bool input_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 None of the newClassifiers may be abstract.
			not newClassifier->exists(isAbstract) */ 
			virtual bool classifier_not_abstract(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The multiplicity of the object InputPin is 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsReplaceAll() const = 0;
			
			/*!
			 Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsReplaceAll (bool _isReplaceAll)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A set of Classifiers to be added to the Classifiers of the given object.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getNewClassifier() const = 0;
			
			/*!
			 The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin> getObject() const = 0;
			
			/*!
			 The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object) = 0;
			/*!
			 A set of Classifiers to be removed from the Classifiers of the given object.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getOldClassifier() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p> */ 
			bool m_isReplaceAll =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A set of Classifiers to be added to the Classifiers of the given object.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> m_newClassifier;
			/*!
			 The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin> m_object;
			/*!
			 A set of Classifiers to be removed from the Classifiers of the given object.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> m_oldClassifier;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> getInput() const = 0; 
	};

}
#endif /* end of include guard: UML_RECLASSIFYOBJECTACTION_HPP */

