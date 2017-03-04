#include "StructuralFeatureActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
StructuralFeatureActionImpl::StructuralFeatureActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
	
}

StructuralFeatureActionImpl::~StructuralFeatureActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StructuralFeatureAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

StructuralFeatureActionImpl::StructuralFeatureActionImpl(const StructuralFeatureActionImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_context  = obj.getContext();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup = obj.getInGroup();
	this->getInGroup()->insert(this->getInGroup()->end(), _inGroup->begin(), _inGroup->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> _inInterruptibleRegion = obj.getInInterruptibleRegion();
	this->getInInterruptibleRegion()->insert(this->getInInterruptibleRegion()->end(), _inInterruptibleRegion->begin(), _inInterruptibleRegion->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> _inPartition = obj.getInPartition();
	this->getInPartition()->insert(this->getInPartition()->end(), _inPartition->begin(), _inPartition->end());

	m_inStructuredNode  = obj.getInStructuredNode();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _incoming = obj.getIncoming();
	this->getIncoming()->insert(this->getIncoming()->end(), _incoming->begin(), _incoming->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input = obj.getInput();
	this->getInput()->insert(this->getInput()->end(), _input->begin(), _input->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _outgoing = obj.getOutgoing();
	this->getOutgoing()->insert(this->getOutgoing()->end(), _outgoing->begin(), _outgoing->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output = obj.getOutput();
	this->getOutput()->insert(this->getOutput()->end(), _output->begin(), _output->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _redefinedNode = obj.getRedefinedNode();
	this->getRedefinedNode()->insert(this->getRedefinedNode()->end(), _redefinedNode->begin(), _redefinedNode->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	m_structuralFeature  = obj.getStructuralFeature();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->push_back(std::shared_ptr<uml::ExceptionHandler>(dynamic_cast<uml::ExceptionHandler*>(_handler->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPostcondition->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPrecondition->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	if(obj.getObject()!=nullptr)
	{
		m_object.reset(dynamic_cast<uml::InputPin*>(obj.getObject()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  StructuralFeatureActionImpl::copy() const
{
	return new StructuralFeatureActionImpl(*this);
}

std::shared_ptr<ecore::EClass> StructuralFeatureActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getStructuralFeatureAction();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool StructuralFeatureActionImpl::multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StructuralFeatureActionImpl::not_static(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StructuralFeatureActionImpl::object_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StructuralFeatureActionImpl::one_featuring_classifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StructuralFeatureActionImpl::visibility(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::InputPin> StructuralFeatureActionImpl::getObject() const
{
//assert(m_object);
    return m_object;
}
void StructuralFeatureActionImpl::setObject(std::shared_ptr<uml::InputPin> _object)
{
    m_object = _object;
}

std::shared_ptr<uml::StructuralFeature> StructuralFeatureActionImpl::getStructuralFeature() const
{
//assert(m_structuralFeature);
    return m_structuralFeature;
}
void StructuralFeatureActionImpl::setStructuralFeature(std::shared_ptr<uml::StructuralFeature> _structuralFeature)
{
    m_structuralFeature = _structuralFeature;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> StructuralFeatureActionImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> handler = getHandler();
	_ownedElement->insert(_ownedElement->end(), handler->begin(), handler->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> input = getInput();
	_ownedElement->insert(_ownedElement->end(), input->begin(), input->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPostcondition = getLocalPostcondition();
	_ownedElement->insert(_ownedElement->end(), localPostcondition->begin(), localPostcondition->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPrecondition = getLocalPrecondition();
	_ownedElement->insert(_ownedElement->end(), localPrecondition->begin(), localPrecondition->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> output = getOutput();
	_ownedElement->insert(_ownedElement->end(), output->begin(), output->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> StructuralFeatureActionImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> redefinedNode = getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());

	return _redefinedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> StructuralFeatureActionImpl::getInput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input(new std::vector<std::shared_ptr<uml::InputPin>>()) ;
	
	_input->push_back(getObject());

	return _input;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> StructuralFeatureActionImpl::getInGroup() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup(new std::vector<std::shared_ptr<uml::ActivityGroup>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> inInterruptibleRegion = getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> inPartition = getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());
	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::shared_ptr<uml::Element> StructuralFeatureActionImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getActivity()!=nullptr)
	{
		_owner = getActivity();
	}
	if(getInStructuredNode()!=nullptr)
	{
		_owner = getInStructuredNode();
	}
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any StructuralFeatureActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //12913
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1294
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //12922
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1290
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //12921
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //12914
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //12915
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //12920
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //12916
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //12917
		case UmlPackage::ACTION_INPUT:
			return getInput(); //12923
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //12910
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //12924
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //12925
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //12926
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1295
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1296
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1297
		case UmlPackage::STRUCTURALFEATUREACTION_OBJECT:
			return getObject(); //12928
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //12918
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //12927
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1291
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1292
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1293
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1298
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //12911
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //12919
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //12912
		case UmlPackage::STRUCTURALFEATUREACTION_STRUCTURALFEATURE:
			return getStructuralFeature(); //12929
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1299
	}
	return boost::any();
}
